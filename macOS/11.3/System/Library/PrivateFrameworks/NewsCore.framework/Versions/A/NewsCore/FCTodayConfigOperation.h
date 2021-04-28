/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCoreConfiguration, FCContentContext;
@class NSString, NSArray, NTPBTodayConfig, NSError, NSDictionary;

@interface FCTodayConfigOperation : FCOperation {

	id<FCCoreConfiguration> _configuration;
	id<FCContentContext> _context;
	NSString* _widgetConfigID;
	NSArray* _networkEvents;
	/*^block*/id _defaultConfigCompletionHandler;
	/*^block*/id _singleTagConfigCompletionHandler;
	NTPBTodayConfig* _resultDefaultConfig;
	NSError* _defaultConfigError;
	NTPBTodayConfig* _resultSingleTagConfig;
	NSError* _singleTagConfigError;
	NSDictionary* _resultHeldRecordsByType;

}

@property (nonatomic,copy) NTPBTodayConfig * resultDefaultConfig;                 //@synthesize resultDefaultConfig=_resultDefaultConfig - In the implementation block
@property (nonatomic,copy) NSError * defaultConfigError;                          //@synthesize defaultConfigError=_defaultConfigError - In the implementation block
@property (nonatomic,copy) NTPBTodayConfig * resultSingleTagConfig;               //@synthesize resultSingleTagConfig=_resultSingleTagConfig - In the implementation block
@property (nonatomic,copy) NSError * singleTagConfigError;                        //@synthesize singleTagConfigError=_singleTagConfigError - In the implementation block
@property (nonatomic,copy) NSArray * networkEvents;                               //@synthesize networkEvents=_networkEvents - In the implementation block
@property (nonatomic,retain) NSDictionary * resultHeldRecordsByType;              //@synthesize resultHeldRecordsByType=_resultHeldRecordsByType - In the implementation block
@property (copy) id<FCCoreConfiguration> configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                        //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * widgetConfigID;                             //@synthesize widgetConfigID=_widgetConfigID - In the implementation block
@property (nonatomic,copy) id defaultConfigCompletionHandler;                     //@synthesize defaultConfigCompletionHandler=_defaultConfigCompletionHandler - In the implementation block
@property (nonatomic,copy) id singleTagConfigCompletionHandler;                   //@synthesize singleTagConfigCompletionHandler=_singleTagConfigCompletionHandler - In the implementation block
-(id)init;
-(id<FCContentContext>)context;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(id<FCCoreConfiguration>)configuration;
-(void)setConfiguration:(id<FCCoreConfiguration>)arg1 ;
-(void)performOperation;
-(NSArray *)networkEvents;
-(char)validateOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setNetworkEvents:(NSArray *)arg1 ;
-(NSString *)widgetConfigID;
-(id)defaultConfigCompletionHandler;
-(id)singleTagConfigCompletionHandler;
-(id)_todayConfigWithConfigJSON:(id)arg1 articleListIDs:(id)arg2 articleIDs:(id)arg3 error:(id*)arg4 ;
-(void)setDefaultConfigError:(NSError *)arg1 ;
-(void)setSingleTagConfigError:(NSError *)arg1 ;
-(void)setResultDefaultConfig:(NTPBTodayConfig *)arg1 ;
-(void)setResultSingleTagConfig:(NTPBTodayConfig *)arg1 ;
-(void)setResultHeldRecordsByType:(NSDictionary *)arg1 ;
-(NTPBTodayConfig *)resultDefaultConfig;
-(NTPBTodayConfig *)resultSingleTagConfig;
-(NSDictionary *)resultHeldRecordsByType;
-(NSError *)defaultConfigError;
-(NSError *)singleTagConfigError;
-(void)_collectRecordIDsReferencedBySectionConfig:(id)arg1 withArticleListIDs:(id)arg2 articleIDs:(id)arg3 ;
-(void)setDefaultConfigCompletionHandler:(id)arg1 ;
-(void)setSingleTagConfigCompletionHandler:(id)arg1 ;
-(void)setWidgetConfigID:(NSString *)arg1 ;
@end

