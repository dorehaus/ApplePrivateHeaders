/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigrationNetworking.framework/Versions/A/SystemMigrationNetworking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemMigrationNetworking/SMNAction.h>

@protocol SMNWindowsCopyPathActionDelegate;
@class NSString, NSURL;

@interface SMWindowsCopyPathAction : SMNAction {

	id<SMNWindowsCopyPathActionDelegate> _delegate;
	NSString* _expandedPath;
	NSString* _sourcePath;
	NSURL* _destinationPath;
	NSString* _lastPathReceived;

}

@property (retain) NSString * sourcePath;                                      //@synthesize sourcePath=_sourcePath - In the implementation block
@property (retain) NSURL * destinationPath;                                    //@synthesize destinationPath=_destinationPath - In the implementation block
@property (retain) NSString * lastPathReceived;                                //@synthesize lastPathReceived=_lastPathReceived - In the implementation block
@property (assign) id<SMNWindowsCopyPathActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSString * expandedPath;                                    //@synthesize expandedPath=_expandedPath - In the implementation block
+(int)actionID;
+(char)streamsResults;
-(id<SMNWindowsCopyPathActionDelegate>)delegate;
-(void)setDelegate:(id<SMNWindowsCopyPathActionDelegate>)arg1 ;
-(char)shouldContinue;
-(NSString *)sourcePath;
-(void)setSourcePath:(NSString *)arg1 ;
-(NSURL *)destinationPath;
-(void)setDestinationPath:(NSURL *)arg1 ;
-(id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
-(void)setExpandedPath:(NSString *)arg1 ;
-(NSString *)expandedPath;
-(char)expectsAResult;
-(id)requestPayload;
-(void)setLastPathReceived:(NSString *)arg1 ;
-(NSString *)lastPathReceived;
-(char)receiveResultOnFd:(int)arg1 errorIsFatal:(char*)arg2 ;
-(id)localPathForFile:(id)arg1 ;
-(void)updatedFile:(id)arg1 partialLength:(unsigned long long)arg2 ;
-(void)finishedFile:(id)arg1 length:(unsigned long long)arg2 ;
@end

