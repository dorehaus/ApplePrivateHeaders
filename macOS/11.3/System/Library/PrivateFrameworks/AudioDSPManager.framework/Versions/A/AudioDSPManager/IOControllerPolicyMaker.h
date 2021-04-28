/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioDSPManager.framework/Versions/A/AudioDSPManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioDSPManager/AudioDSPManager-Structs.h>
@class DatabaseController;

@interface IOControllerPolicyMaker : NSObject {

	DatabaseController* _databaseController;

}
-(id)initWithDatabaseController:(id)arg1 ;
-(void)parseIOControllerConfigurations:(vector<dspd::IOControllerConfiguration, std::__1::allocator<dspd::IOControllerConfiguration>>*)arg1 fromConfigurationChangeRequest:(id)arg2 ;
-(vector<dspd::IOControllerConfiguration, std::__1::allocator<dspd::IOControllerConfiguration>>*)getIOControllerConfigurations:(const vector<id<dspd_ConfigurationChangeRequest>, std::__1::allocator<id<dspd_ConfigurationChangeRequest>>>*)arg1 ;
-(IOControllerConfiguration*)getIOControllerConfiguration:(id)arg1 ioControllerDescription:(const IOControllerDescription*)arg2 ;
-(vector<dspd::IOStreamConfiguration, std::__1::allocator<dspd::IOStreamConfiguration>>*)getIOStreamConfigurations:(id)arg1 ioControllerDescription:(const IOControllerDescription*)arg2 ioControllerSampleRate:(const optional<double>*)arg3 isInput:(char)arg4 ;
-(vector<std::__1::tuple<aura::AudioFormat, std::__1::set<std::__1::tuple<double, double>, std::__1::less<std::__1::tuple<double, double>>, std::__1::allocator<std::__1::tuple<double, double>>>>, std::__1::allocator<std::__1::tuple<aura::AudioFormat, std::__1::set<std::__1::tuple<double, double>, std::__1::less<std::__1::tuple<double, double>>, std::__1::allocator<std::__1::tuple<double, double>>>>>>*)getSupportedIOStreamFormats:(id)arg1 ioStreamMapping:(IOStreamMapping*)arg2 requestedFormat:(optional<aura::AudioFormat>*)arg3 ;
-(id)getDSPFlavor:(id)arg1 ioControllerDescription:(const IOControllerDescription*)arg2 forIOStream:(unsigned)arg3 isInput:(char)arg4 ;
-(id)getAvailableDSPModuleBasicDescriptions:(const vector<id<dspd_ConfigurationChangeRequest>, std::__1::allocator<id<dspd_ConfigurationChangeRequest>>>*)arg1 ;
@end
