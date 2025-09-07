#pragma once
#include <fstream>  
#include <boost/property_tree/ptree.hpp>  
#include <boost/property_tree/ini_parser.hpp>  
#include <boost/filesystem.hpp>    
#include <map>
#include <iostream>

struct SectionInfo {
	SectionInfo();
	~SectionInfo();

	SectionInfo(const SectionInfo& src);
	SectionInfo& operator = (const SectionInfo& src);
	std::string operator[](const std::string& key);	// ���� [] �����
	std::string GetValue(const std::string& key);

	std::map<std::string, std::string> _section_datas;
};

class ConfigMgr
{
public:
	~ConfigMgr();
	SectionInfo operator[](const std::string& section);
	static ConfigMgr& Inst(); 	// �ĳɵ���ģʽ
	ConfigMgr(const ConfigMgr& src);
	ConfigMgr& operator=(const ConfigMgr& src);

	std::string GetValue(const std::string& section, const std::string& key);

private:
	ConfigMgr();
	std::map<std::string, SectionInfo> _config_map; // �洢section��key-value�Ե�map  
};
