/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api-testnet.bybit.com]  
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * MarketApi.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_API_MarketApi_H_
#define IO_SWAGGER_CLIENT_API_MarketApi_H_


#include "../ApiClient.h"

#include "Object.h"
#include <cpprest/details/basic_types.h>

#include <boost/optional.hpp>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  MarketApi
{
public:
    MarketApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~MarketApi();
    /// <summary>
    /// Get the orderbook.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="symbol">Contract type.</param>
    pplx::task<std::shared_ptr<Object>> market_orderbook(
        utility::string_t symbol
    );
    /// <summary>
    /// Get the latest information for symbol.
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="symbol">Contract type. (optional)</param>
    pplx::task<std::shared_ptr<Object>> market_symbolInfo(
        boost::optional<utility::string_t> symbol
    );

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_API_MarketApi_H_ */

