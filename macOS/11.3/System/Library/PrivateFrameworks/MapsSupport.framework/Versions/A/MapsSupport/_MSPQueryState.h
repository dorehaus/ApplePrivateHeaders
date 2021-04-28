/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/Versions/A/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _MSPQueryState : NSObject {

	NSArray* _contents;
	NSArray* _identifiers;

}

@property (readonly) NSArray * contents;                 //@synthesize contents=_contents - In the implementation block
@property (readonly) NSArray * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
-(NSArray *)contents;
-(NSArray *)identifiers;
-(id)initWithContainerContents:(id)arg1 ;
-(id)stateByInvokingPreprocessingBlock:(/*^block*/id)arg1 mappingBlock:(/*^block*/id)arg2 ;
-(id)stateByDeletingObjectsAtIndexes:(id)arg1 ;
-(id)stateByDeletingObjectAtIndex:(unsigned long long)arg1 ;
-(id)stateByMovingObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(id)initWithContents:(id)arg1 identifiers:(id)arg2 ;
@end

