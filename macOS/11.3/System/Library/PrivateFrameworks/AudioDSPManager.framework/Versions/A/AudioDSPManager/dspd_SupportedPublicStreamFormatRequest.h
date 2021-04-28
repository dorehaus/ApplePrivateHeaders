/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioDSPManager.framework/Versions/A/AudioDSPManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol dspd_SupportedPublicStreamFormatRequest <NSObject>
@property (assign,nonatomic) StreamDescription streamDescription; 
@property (assign,nonatomic) DeviceDescription deviceDescription; 
@property (assign,nonatomic) vector<dspd::PortDescription portDescriptions; 
@required
-(StreamDescription)streamDescription;
-(DeviceDescription)deviceDescription;
-(vector<dspd::PortDescription)portDescriptions;
-(void)setPortDescriptions:(vector<dspd::PortDescription, std::__1::allocator<dspd::PortDescription>>*)arg1;
-(void)setDeviceDescription:(DeviceDescription*)arg1;
-(void)setStreamDescription:(StreamDescription*)arg1;

@end

