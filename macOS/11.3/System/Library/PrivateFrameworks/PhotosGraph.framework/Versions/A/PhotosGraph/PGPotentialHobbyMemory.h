/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, NSArray, PGGraphPersonNode;

@interface PGPotentialHobbyMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	NSArray* _hobbyAssetLocalIdentifiers;
	PGGraphPersonNode* _personNode;
	long long _year;
	long long _hobbyType;

}

@property (retain) NSArray * hobbyAssetLocalIdentifiers;              //@synthesize hobbyAssetLocalIdentifiers=_hobbyAssetLocalIdentifiers - In the implementation block
@property (readonly) PGGraphPersonNode * personNode;                  //@synthesize personNode=_personNode - In the implementation block
@property (readonly) long long year;                                  //@synthesize year=_year - In the implementation block
@property (readonly) long long hobbyType;                             //@synthesize hobbyType=_hobbyType - In the implementation block
-(long long)year;
-(long long)hobbyType;
-(void)addMomentNode:(id)arg1 ;
-(PGGraphPersonNode *)personNode;
-(id)initWithPerson:(id)arg1 year:(long long)arg2 hobbyType:(long long)arg3 ;
-(NSArray *)hobbyAssetLocalIdentifiers;
-(void)setHobbyAssetLocalIdentifiers:(NSArray *)arg1 ;
@end

