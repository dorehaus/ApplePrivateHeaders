/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AudioResourceArbitration.framework/Versions/A/AudioResourceArbitration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioResourceArbitration/AudioResourceArbitration-Structs.h>
#import <libobjc.A.dylib/dspd_DSPDelegate.h>

@class NSString;

@interface DSPDelegateDouble : NSObject <dspd_DSPDelegate> {

	DSPDelegateDouble_Data* admData_;

}

@property (nonatomic,readonly) vector<dspd::PortRecord<float> scalarVolumeRecords; 
@property (nonatomic,readonly) vector<dspd::PortRecord<bool> muteRecords; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
+(id)dspDelegateDouble;
+(id)dspDelegateDoubleWithData:(const DSPDelegateDouble_Data*)arg1 ;
-(id)init;
-(id)init:(const DSPDelegateDouble_Data*)arg1 ;
-(id)activationChangeRequestWithSession:(unsigned)arg1 ;
-(id)deactivationChangeRequestWithSession:(unsigned)arg1 ;
-(expected<dspd::NegotiateResponse, std::__1::error_code>*)negotiateConfigurationChange:(id)arg1 ;
-(expected<dspd::AdaptResponse, std::__1::error_code>*)adaptToConfigurationChange:(id)arg1 ;
-(expected<dspd::SimulateResponse, std::__1::error_code>*)simulateConfigurationChange:(id)arg1 ;
-(vector<dspd::PortRecord<float>)scalarVolumeRecords;
-(vector<dspd::PortRecord<bool>)muteRecords;
-(void)setNegotiateHandler:(function<caulk::expected<dspd::NegotiateResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>*)arg1 ;
-(void)setAdaptHandler:(function<caulk::expected<dspd::AdaptResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>*)arg1 ;
-(void)setSimulateHandler:(function<caulk::expected<dspd::SimulateResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>*)arg1 ;
@end

