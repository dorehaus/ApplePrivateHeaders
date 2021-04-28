/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSKnownKeysMappingStrategy;

@interface PLInterest : NSObject {

	NSKnownKeysMappingStrategy* _allKeysMappingStrategy;
	unsigned long long _indexesOfInterest;

}

@property (nonatomic,retain) NSKnownKeysMappingStrategy * allKeysMappingStrategy;              //@synthesize allKeysMappingStrategy=_allKeysMappingStrategy - In the implementation block
@property (assign,nonatomic) unsigned long long indexesOfInterest;                             //@synthesize indexesOfInterest=_indexesOfInterest - In the implementation block
-(NSKnownKeysMappingStrategy *)allKeysMappingStrategy;
-(unsigned long long)indexesOfInterest;
-(void)setAllKeysMappingStrategy:(NSKnownKeysMappingStrategy *)arg1 ;
-(void)setIndexesOfInterest:(unsigned long long)arg1 ;
@end

