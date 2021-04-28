/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCResource.h>

@class QCCLContext;

@interface QCMemObject : QCResource {

	unsigned long long _identifier;
	cl_memRef _stream;
	QCCLContext* _context;
	int _status;
	cl_device_idRef _device;
	cl_eventRef _event;
	unsigned long long _flags;
	unsigned _acquired : 1;
	void** _unused2[4];

}

@property (readonly) QCCLContext * context;                      //@synthesize context=_context - In the implementation block
@property (readonly) cl_mem* memObject; 
@property (assign) cl_eventRef event;                            //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long byteSize; 
@property (readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) char attached; 
-(void)finalize;
-(void)dealloc;
-(id)description;
-(unsigned long long)identifier;
-(cl_eventRef)event;
-(QCCLContext *)context;
-(char)attached;
-(void)setEvent:(cl_eventRef)arg1 ;
-(unsigned long long)byteSize;
-(void)releaseGLObject;
-(cl_mem*)memObject;
-(char)beginUpdateStream;
-(void)endUpdateStream;
-(id)initWithContext:(id)arg1 stream:(cl_memRef)arg2 ;
-(char)acquireGLObject;
@end
