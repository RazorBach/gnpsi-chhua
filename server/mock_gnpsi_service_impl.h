#ifndef OPENCONFIG_GNPSI_SERVER_MOCK_GNPSI_SERVICE_IMPL_H_
#define OPENCONFIG_GNPSI_SERVER_MOCK_GNPSI_SERVICE_IMPL_H_

#include "gmock/gmock.h"
#include "server/gnpsi_service_impl.h"

namespace gnpsi {
class MockGnpsiServiceImpl : public GnpsiSenderInterface {
 public:
  virtual ~MockGnpsiServiceImpl() = default;
  MOCK_METHOD(void, SendSamplePacket,
              (const std::string& sample_packet,
               SFlowMetadata::Version version),
              (override));
  MOCK_METHOD(void, DrainConnections, (), (override));
};
}  // namespace gnpsi

#endif  // OPENCONFIG_GNPSI_SERVER_MOCK_GNPSI_SERVICE_IMPL_H_
