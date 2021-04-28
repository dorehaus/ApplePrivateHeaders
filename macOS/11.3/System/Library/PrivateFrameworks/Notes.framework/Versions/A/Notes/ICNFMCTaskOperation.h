/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Versions/A/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBlockOperation.h>

@class ICNFMCActivityMonitor;

@interface ICNFMCTaskOperation : NSBlockOperation {

	ICNFMCActivityMonitor* _parentMonitor;
	ICNFMCActivityMonitor* _monitor;

}

@property (retain) ICNFMCActivityMonitor * parentMonitor;              //@synthesize parentMonitor=_parentMonitor - In the implementation block
@property (retain) ICNFMCActivityMonitor * monitor;                    //@synthesize monitor=_monitor - In the implementation block
+(void)setTaskDescription:(const char*)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)main;
-(ICNFMCActivityMonitor *)monitor;
-(void)setMonitor:(ICNFMCActivityMonitor *)arg1 ;
-(void)setParentMonitor:(id)arg1 taskName:(id)arg2 ;
-(void)setParentMonitor:(ICNFMCActivityMonitor *)arg1 ;
-(ICNFMCActivityMonitor *)parentMonitor;
-(id)setTaskName:(id)arg1 priority:(unsigned char)arg2 canCancel:(char)arg3 ;
@end
