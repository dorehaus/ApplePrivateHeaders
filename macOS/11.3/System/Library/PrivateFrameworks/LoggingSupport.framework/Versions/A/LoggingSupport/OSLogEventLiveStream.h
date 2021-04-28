/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/Versions/A/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/OSLogEventStreamBase.h>

@protocol OS_xpc_object;
@class _OSLogStreamFilter, NSObject, OSLogEventLiveSource;

@interface OSLogEventLiveStream : OSLogEventStreamBase {

	_OSLogStreamFilter* _streamFilter;
	unsigned long long _reason;
	NSObject*<OS_xpc_object> _diagdconn;
	OSLogEventLiveSource* _source;
	/*^block*/id _dropnoteHandler;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> diagdconn;              //@synthesize diagdconn=_diagdconn - In the implementation block
@property (nonatomic,copy) id dropnoteHandler;                                //@synthesize dropnoteHandler=_dropnoteHandler - In the implementation block
@property (nonatomic,readonly) OSLogEventLiveSource * source;                 //@synthesize source=_source - In the implementation block
-(NSObject*<OS_xpc_object>)diagdconn;
-(id)dropnoteHandler;
-(void)_handleStreamedObject:(id)arg1 usingProxy:(id)arg2 ;
-(void)_activateLiveStream;
-(void)setDiagdconn:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setDropnoteHandler:(id)arg1 ;
-(void)invalidate;
-(OSLogEventLiveSource *)source;
-(void)activate;
-(void)setFilterPredicate:(id)arg1 ;
-(id)initWithLiveSource:(id)arg1 ;
-(void)setDroppedEventHandler:(/*^block*/id)arg1 ;
@end

