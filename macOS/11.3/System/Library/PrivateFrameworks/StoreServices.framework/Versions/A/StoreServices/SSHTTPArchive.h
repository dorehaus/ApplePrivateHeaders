/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDictionary, NSString;

@interface SSHTTPArchive : NSObject {

	char _compressed;
	NSData* _backingJSONData;

}

@property (nonatomic,retain) NSData * backingJSONData;                 //@synthesize backingJSONData=_backingJSONData - In the implementation block
@property (assign,nonatomic) char compressed;                          //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,readonly) NSData * JSONData; 
@property (nonatomic,readonly) NSDictionary * JSONObject; 
@property (nonatomic,readonly) NSString * JSONString; 
+(id)merge:(id)arg1 ;
+(id)merge:(id)arg1 withEstimatedFileSizeLimit:(unsigned long long)arg2 ;
+(double)_timeIntervalFromFilename:(id)arg1 ;
+(id)_dateFormatterForTimeZone:(id)arg1 ;
+(id)_stringFromDate:(id)arg1 ;
+(id)_creatorDictionary;
+(id)_JSONObjectForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
+(id)_JSONObjectForEntries:(id)arg1 ;
+(id)outputDirectoryForLogConfig:(id)arg1 ;
+(id)_entryDictionaryForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
+(id)_requestDictionaryForTaskTransactionMetrics:(id)arg1 requestData:(id)arg2 ;
+(id)_responseDictionaryForTaskMetrics:(id)arg1 responseData:(id)arg2 ;
+(id)_generateCommentsForTaskMetrics:(id)arg1 ;
+(id)_entriesArrayForTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
+(id)_localIPAddress;
+(id)_headersArrayForHTTPHeaders:(id)arg1 ;
+(id)_contentDictionaryForResponse:(id)arg1 responseData:(id)arg2 ;
+(void)removeLogsWithLogConfig:(id)arg1 olderThanDate:(id)arg2 ;
+(void)sendWriteAllLogsToDiskNotification;
+(void)sendWriteAllLogsToDiskDecompressedNotification;
-(id)description;
-(char)compressed;
-(void)setCompressed:(char)arg1 ;
-(NSDictionary *)JSONObject;
-(id)initWithJSONObject:(id)arg1 ;
-(NSData *)backingJSONData;
-(void)setBackingJSONData:(NSData *)arg1 ;
-(NSData *)JSONData;
-(NSString *)JSONString;
-(char)writeToDiskWithLogConfig:(id)arg1 compressed:(char)arg2 error:(id*)arg3 ;
-(id)initWithTaskMetrics:(id)arg1 requestData:(id)arg2 responseData:(id)arg3 ;
-(char)writeToDiskError:(id*)arg1 ;
@end

