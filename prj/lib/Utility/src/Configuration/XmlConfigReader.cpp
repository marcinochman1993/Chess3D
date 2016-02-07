#include "Configuration/XmlConfigReader.hpp"
#include "Configuration/ConfigParseException.hpp"

#include <iostream>
#include <fstream>

using namespace MOSoft::Configuration;
using namespace std;
using namespace xmlpp;

ConfigurationManager XmlConfigReader::parse()
{
  const int BUFFER_SIZE = 64;
  ifstream inputStream(path().toStdString());
  char buffer[BUFFER_SIZE];

  m_errorOccured = false;
  do
    {
      inputStream.read(buffer, BUFFER_SIZE - 1); // TODO: make it faster
      if(inputStream.gcount())
	{
	  Glib::ustring input(buffer, buffer + inputStream.gcount());
	  this->parse_chunk(input);
	} 
    } while(inputStream && !m_errorOccured);

  if(m_errorOccured || m_stack.size() > 0)
    throw ConfigParseException();

  return m_manager;
}

void  XmlConfigReader::on_start_document()
{
 
}

void XmlConfigReader::on_end_document()
{
  
  
}

void XmlConfigReader::on_start_element(const Glib::ustring& name,
				       const AttributeList& properties)
{
  ConfigurationEntry entry;

  entry.name(String::String(name));
  
  for(const SaxParser::Attribute& attribute: properties)
    {
      entry.addAttribute(String::String(attribute.name),
			 String::String(attribute.name));
    }

  m_stack.push(entry);
  
}

void XmlConfigReader::on_end_element(const Glib::ustring& name)
{
  ConfigurationEntry entry = m_stack.top();
  
  if(entry.name().toStdString() == name)
    {
      m_stack.pop();
      if(m_stack.size() > 0) // has parent
	{	  
	  ConfigurationEntry& parentEntry = m_stack.top();
	  parentEntry.addEntry(entry);
	}
      else
	m_manager.addEntry(entry);
    }
}

void XmlConfigReader::on_characters(const Glib::ustring& characters)
{
  
}

void XmlConfigReader::on_comment(const Glib::ustring& text)
{
  
}

void XmlConfigReader::on_warning(const Glib::ustring& text)
{
  
}

void XmlConfigReader::on_error(const Glib::ustring& text)
{
  m_errorOccured = true;
}

void XmlConfigReader::on_fatal_error(const Glib::ustring& text)
{
  m_errorOccured = true;
}
