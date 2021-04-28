/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LinguisticData.framework/Versions/A/LinguisticData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSConditionLock;

@interface LDAssetQuery : NSObject {

	NSString* _language;
	NSConditionLock* _conditionLock;
	char _hasCompleted;
	char _waitTimedOut;

}

@property (readonly) char hasCompleted; 
-(void)_runInForeground:(char)arg1 ;
-(void)runInForeground;
-(void)runInBackground;
-(void)dealloc;
-(char)hasCompleted;
-(id)initWithLanguage:(id)arg1 ;
-(char)waitForCompletion;
@end

