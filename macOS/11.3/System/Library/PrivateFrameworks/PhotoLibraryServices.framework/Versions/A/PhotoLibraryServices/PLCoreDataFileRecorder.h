/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_io, OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableDictionary, NSObject;

@interface PLCoreDataFileRecorder : NSObject {

	NSMutableDictionary* _observationCountByStatementSQL;
	NSMutableDictionary* _observationCountByBacktraceHash;
	os_unfair_lock_s _observationsLock;
	NSObject*<OS_dispatch_io> _file;
	NSObject*<OS_dispatch_queue> _writingQueue;

}
+(void)_writeRecordingPostambleUsingQueue:(id)arg1 toFile:(id)arg2 ;
+(void)_writeEntries:(id)arg1 toFile:(id)arg2 usingQueue:(id)arg3 ;
+(id)_chooseFileURLFromFileURL:(id)arg1 ;
+(unsigned long long)_callStackHash;
+(id)_jsonFragmentFromEntry:(id)arg1 ;
-(id)init;
-(char)stopRecording;
-(void)_installSignalHandler;
-(void)_reconsiderRecordingState;
-(void)_decorateEntry:(id)arg1 ;
-(char)startRecordingToFileURL:(id)arg1 withTag:(id)arg2 ;
@end
