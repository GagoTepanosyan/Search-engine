#ifndef CRAWLER_PAGELOADER_H	
#define CRAWLER_PAGELOADER_H

#include <string>
#include <sstream>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Infos.hpp>

#include "Page.h"

class PageLoader {
public:
	static Page load(const std::string& url);
};

#endif //CRAWLER_PAGELOADER_H
