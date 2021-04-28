/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DisplayTransportServices.framework/Versions/A/DisplayTransportServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DTSIOConnect;
@interface DTSDisplayPortDeviceManager : NSObject {

	id<DTSIOConnect> _muxConnect;

}

@property (nonatomic,readonly) id<DTSIOConnect> muxConnect;              //@synthesize muxConnect=_muxConnect - In the implementation block
+(id)devices;
-(id<DTSIOConnect>)muxConnect;
@end
