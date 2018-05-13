// this class's header
#include "JetWriter.h"

// HDF5 things
#include "HDF5Utils/HdfTuple.h"
#include "H5Cpp.h"

// ATLAS things
#include "xAODJet/Jet.h"

#include <iostream>

JetWriter::JetWriter(H5::Group& output_group):
  m_current_jet(nullptr),
  m_rnnip_pu("rnnip_pu"),
  m_rnnip_pb("rnnip_pb"),
  m_jf_sig("JetFitter_significance3d"),
  m_writer(nullptr)
{
  // define the variable filling functions. Each function takes no
  // arguments, but includes a pointer to the class instance, and by
  // extension to the current jet.
  // H5Utils::VariableFillers fillers;
  // fillers.add<float>("rnnip_ratio", [this]() -> float {
  //     double num = this->m_rnnip_pb(*this->m_current_jet->btagging());
  //     double denom = this->m_rnnip_pu(*this->m_current_jet->btagging());
  //     return num / denom;
  //   });

  // fillers.add<float>("jf_sig", [this]() -> double {
  //     return this->m_jf_sig(*this->m_current_jet->btagging());
  //   });
  // std::cout << "before" << std::endl;
  // m_writer = new H5Utils::WriterXd(output_group, "jets", fillers, {});
  // std::cout << "after" << std::endl;
}

JetWriter::~JetWriter() {
  // if (m_writer) m_writer->flush();
  // delete m_writer;
}

void JetWriter::write(const xAOD::Jet& jet) {
  // m_current_jet = &jet;
  // m_writer->fillWhileIncrementing();
}
