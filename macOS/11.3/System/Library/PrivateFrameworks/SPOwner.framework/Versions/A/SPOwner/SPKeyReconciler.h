/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/Versions/A/SPOwner
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableArray;

@interface SPKeyReconciler : NSObject {

	NSDictionary* _backingDictionary;
	NSMutableArray* _keyIndices;

}
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)reconcileKey:(id)arg1 matchedIndex:(unsigned*)arg2 sequence:(unsigned char*)arg3 error:(unsigned char*)arg4 ;
@end

