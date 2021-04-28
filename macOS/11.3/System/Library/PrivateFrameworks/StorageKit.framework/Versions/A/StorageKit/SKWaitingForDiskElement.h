/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StorageKit.framework/Versions/A/StorageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface SKWaitingForDiskElement : NSObject {

	NSDictionary* _diskDictionary;
	/*^block*/id _block;

}

@property (retain) NSDictionary * diskDictionary;              //@synthesize diskDictionary=_diskDictionary - In the implementation block
@property (copy) id block;                                     //@synthesize block=_block - In the implementation block
-(void)setDiskDictionary:(NSDictionary *)arg1 ;
-(NSDictionary *)diskDictionary;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end

