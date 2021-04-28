/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SensorKit.framework/Versions/A/SensorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary, NSError;


@protocol SRRequestRecording <SRRequestReading>
@property (nonatomic,retain) NSDictionary * sensorConfiguration; 
@property (nonatomic,readonly) NSError * configurationDecodeError; 
@required
-(NSDictionary *)sensorConfiguration;
-(void)setSensorConfiguration:(id)arg1;
-(NSError *)configurationDecodeError;

@end

