/*
 * Copyright (C) 2024 Renesas Electronics Corporation.
 * Copyright (C) 2024 EPAM Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef APP_HPP_
#define APP_HPP_

#include <Poco/Util/ServerApplication.h>

/**
 * Aos IAM application.
 */
class App : public Poco::Util::ServerApplication {
protected:
    int  main(const ArgVec& args);
    void defineOptions(Poco::Util::OptionSet& options);

private:
    void HandleHelp(const std::string& name, const std::string& value);
    void HandleVersion(const std::string& name, const std::string& value);
    void HandleProvisioning(const std::string& name, const std::string& value);
    void HandleJournal(const std::string& name, const std::string& value);
    void HandleLogLevel(const std::string& name, const std::string& value);

    bool mStopProcessing = false;
    bool mProvisioning   = false;
};

#endif
