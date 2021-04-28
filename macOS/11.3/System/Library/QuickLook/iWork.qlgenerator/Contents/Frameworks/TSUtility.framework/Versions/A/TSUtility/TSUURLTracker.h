/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSUtility.framework/Versions/A/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUURLWrapper.h>

@class TSUURLTrackerFilePresenter, NSURL, NSData, NSString;

@interface TSUURLTracker : NSObject <TSUURLWrapper> {

	TSUURLTrackerFilePresenter* _filePresenter;

}

@property (readonly) NSURL * URL; 
@property (readonly) NSData * bookmarkData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)resume;
-(NSURL *)URL;
-(void)pause;
-(void)stop;
-(id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3 ;
-(id)URLAndReturnError:(id*)arg1 ;
-(NSData *)bookmarkData;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 ;
-(id)initWithBookmarkData:(id)arg1 ;
-(id)initWithBookmarkData:(id)arg1 delegate:(id)arg2 ;
@end

