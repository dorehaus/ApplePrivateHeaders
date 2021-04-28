/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBWidgetConfig, NSDictionary;

@interface FCWidgetConfig : NSObject <NSSecureCoding, NSCopying> {

	NTPBWidgetConfig* _pbWidgetConfig;
	NSDictionary* _configDictionary;

}

@property (nonatomic,copy) NTPBWidgetConfig * pbWidgetConfig;                                     //@synthesize pbWidgetConfig=_pbWidgetConfig - In the implementation block
@property (nonatomic,copy) NSDictionary * configDictionary;                                       //@synthesize configDictionary=_configDictionary - In the implementation block
@property (nonatomic,readonly) double parsecPopulationFloor; 
@property (nonatomic,readonly) double parsecPopulationCeiling; 
@property (nonatomic,readonly) long long foregroundMinimumUpdateInterval; 
@property (nonatomic,readonly) long long backgroundMinimumUpdateInterval; 
@property (nonatomic,readonly) long long articleListForegroundMinimumUpdateInterval; 
@property (nonatomic,readonly) long long articleListBackgroundMinimumUpdateInterval; 
@property (nonatomic,readonly) long long forYouForegroundMinimumUpdateInterval; 
@property (nonatomic,readonly) long long forYouBackgroundMinimumUpdateInterval; 
@property (nonatomic,readonly) long long minimumArticleExposureDurationToBePreseen; 
@property (nonatomic,readonly) unsigned minimumNumberOfTimesPreseenToBeSeen; 
@property (nonatomic,readonly) long long widgetSystemReloadInterval; 
@property (nonatomic,readonly) long long widgetSystemReloadJitterMax; 
@property (nonatomic,readonly) long long widgetSystemHoneymoonDuration; 
@property (nonatomic,readonly) long long widgetSystemReloadIntervalHoneymoon; 
@property (nonatomic,readonly) long long widgetSystemReloadJitterMaxHoneymoon; 
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)widgetSystemReloadInterval;
-(long long)widgetSystemReloadJitterMax;
-(long long)minimumArticleExposureDurationToBePreseen;
-(unsigned)minimumNumberOfTimesPreseenToBeSeen;
-(long long)foregroundMinimumUpdateInterval;
-(long long)backgroundMinimumUpdateInterval;
-(long long)forYouForegroundMinimumUpdateInterval;
-(long long)forYouBackgroundMinimumUpdateInterval;
-(long long)articleListForegroundMinimumUpdateInterval;
-(long long)articleListBackgroundMinimumUpdateInterval;
-(double)parsecPopulationFloor;
-(double)parsecPopulationCeiling;
-(id)initWithConfigDictionary:(id)arg1 ;
-(long long)widgetSystemHoneymoonDuration;
-(long long)widgetSystemReloadIntervalHoneymoon;
-(long long)widgetSystemReloadJitterMaxHoneymoon;
-(NSDictionary *)configDictionary;
-(void)setConfigDictionary:(NSDictionary *)arg1 ;
-(NTPBWidgetConfig *)pbWidgetConfig;
-(void)setPbWidgetConfig:(NTPBWidgetConfig *)arg1 ;
-(id)initWithWidgetConfig:(id)arg1 ;
@end

