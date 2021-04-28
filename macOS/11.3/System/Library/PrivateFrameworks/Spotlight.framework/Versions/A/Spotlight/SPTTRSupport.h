/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Spotlight.framework/Versions/A/Spotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SPTTRSupport : NSObject {

	NSString* _logForTTR;
	NSString* _fvFilePath;

}
+(id)getSharedInstance;
-(id)init;
-(void)setFVFilePathWithQueryString:(id)arg1 ;
-(id)getTTRURL;
-(void)clearExistingFiles;
-(void)dumpFeatureVectorForRankingItems:(id)arg1 query:(id)arg2 ;
-(void)dumpTTRDebugFilesForQuery:(id)arg1 rankingItems:(id)arg2 ;
-(void)saveLogForTTR:(id)arg1 ;
@end
