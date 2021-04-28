/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProviderDaemon/FPDActionOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, FPDCoordinator, FPDownloadInfo;

@interface FPDDownloadOperation : FPDActionOperation {

	NSObject*<OS_dispatch_queue> _queue;
	FPDCoordinator* _coordinator;

}

@property (nonatomic,readonly) FPDownloadInfo * info; 
+(char)_validateInfo:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithActionInfo:(id)arg1 request:(id)arg2 server:(id)arg3 ;
-(void)sendPastUpdatesToClient:(id)arg1 ;
-(id)downloadInfo;
-(void)_setupCreatedItemForRoot:(id)arg1 ;
-(void)_finishedDownloadingLocator:(id)arg1 withError:(id)arg2 ;
@end

