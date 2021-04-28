/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreDisplay.framework/Versions/A/CoreDisplay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreDisplay/CoreDisplay-Structs.h>
@class NSObject, NSString;

@interface VirtualDisplayClient : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _terminationHandlerQueue;
	/*^block*/id _terminationHandler;
	void* _arg;
	unsigned _displayID;
	unsigned _serverRPC_port;
	unsigned _proxyRPC_port;
	unsigned _clientHandler_port;
	unsigned _vendorID;
	unsigned _productID;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned displayID;              //@synthesize displayID=_displayID - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(char)pluginWithOptions:(id)arg1 ;
-(void)unplug;
-(id)initWithVendorID:(unsigned)arg1 productID:(unsigned)arg2 serialNum:(unsigned)arg3 name:(id)arg4 sizeInMillimeters:(CGSize)arg5 maxPixelsWide:(unsigned)arg6 maxPixelsHigh:(unsigned)arg7 redPrimary:(CGPoint)arg8 greenPrimary:(CGPoint)arg9 bluePrimary:(CGPoint)arg10 whitePoint:(CGPoint)arg11 queue:(id)arg12 terminationHandler:(/*^block*/id)arg13 arg:(void*)arg14 ;
-(id)initWithOptions:(id)arg1 queue:(id)arg2 terminationHandler:(/*^block*/id)arg3 context:(void*)arg4 ;
-(char)applySettings:(id)arg1 ;
-(unsigned)proxyGone;
-(unsigned)displayID;
@end

