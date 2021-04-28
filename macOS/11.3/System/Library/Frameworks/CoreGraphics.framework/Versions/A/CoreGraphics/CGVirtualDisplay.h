/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreGraphics/CoreGraphics-Structs.h>
@class NSString, NSObject, NSArray;

@interface CGVirtualDisplay : NSObject {

	unsigned _vendorID;
	unsigned _productID;
	unsigned _serialNumber;
	NSString* _name;
	CGSize _sizeInMillimeters;
	unsigned _maxPixelsWide;
	unsigned _maxPixelsHigh;
	CGPoint _redPrimary;
	CGPoint _greenPrimary;
	CGPoint _bluePrimary;
	CGPoint _whitePoint;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _terminationHandler;
	void* _client;
	unsigned _displayID;
	unsigned _hiDPI;
	unsigned _rotation;
	double _refreshDeadline;
	NSArray* _modes;
	unsigned _serverRPC_port;
	unsigned _proxyRPC_port;
	unsigned _clientHandler_port;

}

@property (nonatomic,readonly) unsigned vendorID;                               //@synthesize vendorID=_vendorID - In the implementation block
@property (nonatomic,readonly) unsigned productID;                              //@synthesize productID=_productID - In the implementation block
@property (nonatomic,readonly) unsigned serialNumber;                           //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) unsigned serialNum; 
@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CGSize sizeInMillimeters;                        //@synthesize sizeInMillimeters=_sizeInMillimeters - In the implementation block
@property (nonatomic,readonly) unsigned maxPixelsWide;                          //@synthesize maxPixelsWide=_maxPixelsWide - In the implementation block
@property (nonatomic,readonly) unsigned maxPixelsHigh;                          //@synthesize maxPixelsHigh=_maxPixelsHigh - In the implementation block
@property (nonatomic,readonly) CGPoint redPrimary;                              //@synthesize redPrimary=_redPrimary - In the implementation block
@property (nonatomic,readonly) CGPoint greenPrimary;                            //@synthesize greenPrimary=_greenPrimary - In the implementation block
@property (nonatomic,readonly) CGPoint bluePrimary;                             //@synthesize bluePrimary=_bluePrimary - In the implementation block
@property (nonatomic,readonly) CGPoint whitePoint;                              //@synthesize whitePoint=_whitePoint - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) id terminationHandler;                      //@synthesize terminationHandler=_terminationHandler - In the implementation block
@property (nonatomic,readonly) unsigned displayID;                              //@synthesize displayID=_displayID - In the implementation block
@property (nonatomic,readonly) unsigned hiDPI;                                  //@synthesize hiDPI=_hiDPI - In the implementation block
@property (nonatomic,readonly) unsigned rotation;                               //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,readonly) NSArray * modes;                                 //@synthesize modes=_modes - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(unsigned)rotation;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)terminationHandler;
-(NSArray *)modes;
-(char)applySettings:(id)arg1 ;
-(unsigned)displayID;
-(unsigned)vendorID;
-(unsigned)productID;
-(unsigned)serialNumber;
-(unsigned)serialNum;
-(CGPoint)redPrimary;
-(CGPoint)greenPrimary;
-(CGPoint)bluePrimary;
-(CGPoint)whitePoint;
-(CGSize)sizeInMillimeters;
-(unsigned)maxPixelsWide;
-(unsigned)maxPixelsHigh;
-(unsigned)hiDPI;
-(id)initWithDescriptor:(id)arg1 ;
@end

