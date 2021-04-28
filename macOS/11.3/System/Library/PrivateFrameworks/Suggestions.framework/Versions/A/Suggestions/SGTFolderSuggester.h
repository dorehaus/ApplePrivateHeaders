/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Suggestions.framework/Versions/A/Suggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Suggestions/SGTSuggester.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL;

@interface SGTFolderSuggester : SGTSuggester {

	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _rootPath;

}

@property (copy) NSURL * rootPath;              //@synthesize rootPath=_rootPath - In the implementation block
-(void)dealloc;
-(void)cleanup;
-(void)setInput:(id)arg1 ;
-(id)initWithRootPath:(id)arg1 ;
-(void)setRootPath:(NSURL *)arg1 ;
-(NSURL *)rootPath;
@end

