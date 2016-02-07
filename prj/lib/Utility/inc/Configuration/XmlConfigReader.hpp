#ifndef XML_CONFIG_READER_HPP
#define XML_CONFIG_READER_HPP

#include "ConfigurationReader.hpp"
#include <libxml++/libxml++.h>
#include <stack>


namespace MOSoft
{
  namespace Configuration
  {    

    class XmlConfigReader:  public ConfigurationReader, private  xmlpp::SaxParser
    {
    public:
      XmlConfigReader(const String::String& xmlPath): ConfigurationReader(xmlPath) { }
      ConfigurationManager parse() override;

      ~XmlConfigReader() override { }
    private:

      void on_start_document() override;
      void on_end_document() override;
      void on_start_element(const Glib::ustring& name,
      			    const AttributeList& properties) override;
      void on_end_element(const Glib::ustring& name) override;
      void on_characters(const Glib::ustring& characters) override;
      void on_comment(const Glib::ustring& text) override;
      void on_warning(const Glib::ustring& text) override;
      void on_error(const Glib::ustring& text) override;
      void on_fatal_error(const Glib::ustring& text) override;
             
      std::stack<ConfigurationEntry> m_stack;

      ConfigurationManager m_manager;

      bool m_isParsed;
      bool m_errorOccured;
    };

  }
}
#endif // XML_CONFIG_READER_HPP
