/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigration/SMCopyEngineCopier.h>
#import <libobjc.A.dylib/SMNWindowsCopyPathActionDelegate.h>

@class NSString;

@interface SMCopyEngineWindowsPathCopier : SMCopyEngineCopier <SMNWindowsCopyPathActionDelegate> {

	NSString* _windowsSourcePath;
	unsigned long long _quantityDataReceived;
	NSString* _expandedPath;

}

@property (assign) unsigned long long quantityDataReceived;              //@synthesize quantityDataReceived=_quantityDataReceived - In the implementation block
@property (retain) NSString * expandedPath;                              //@synthesize expandedPath=_expandedPath - In the implementation block
@property (retain) NSString * windowsSourcePath;                         //@synthesize windowsSourcePath=_windowsSourcePath - In the implementation block
-(id)description;
-(void)setWindowsSourcePath:(NSString *)arg1 ;
-(char)processReturningError:(id*)arg1 ;
-(void)setQuantityDataReceived:(unsigned long long)arg1 ;
-(unsigned long long)quantityDataReceived;
-(char)preProcessReturningError:(id*)arg1 ;
-(void)copyAction:(id)arg1 updatedFile:(id)arg2 partialLength:(unsigned long long)arg3 ;
-(void)copyAction:(id)arg1 finishedFile:(id)arg2 length:(unsigned long long)arg3 ;
-(char)copyActionShouldContinue:(id)arg1 ;
-(NSString *)windowsSourcePath;
-(void)setExpandedPath:(NSString *)arg1 ;
-(NSString *)expandedPath;
@end

