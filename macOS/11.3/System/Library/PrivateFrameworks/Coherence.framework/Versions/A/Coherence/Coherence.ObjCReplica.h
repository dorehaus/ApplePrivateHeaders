/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Coherence.framework/Versions/A/Coherence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface Coherence.ObjCReplica : NSObject {

	??? uuid;
	 index;

}

@property (copy,nonatomic) NSUUID * uuid; 
@property (assign,nonatomic) long long index; 
-(id)init;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(id)initWithUuid:(id)arg1 index:(long long)arg2 ;
@end
