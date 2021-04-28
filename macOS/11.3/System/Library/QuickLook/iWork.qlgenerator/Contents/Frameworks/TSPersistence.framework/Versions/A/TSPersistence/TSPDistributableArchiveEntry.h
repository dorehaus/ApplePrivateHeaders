/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPIdentifiedDataRepresentation.h>

@class NSString, SFUDataRepresentation;

@interface TSPDistributableArchiveEntry : NSObject <TSPIdentifiedDataRepresentation> {

	long long _identifier;
	NSString* _fileStateIdentifier;
	SFUDataRepresentation* _objectData;
	set<long long, std::__1::less<long long>, std::__1::allocator<long long>>* _ownedIds;
	int _classType;
	unsigned _version;
	NSString* _relativeDataPath;

}

@property (nonatomic,copy) NSString * relativeDataPath;              //@synthesize relativeDataPath=_relativeDataPath - In the implementation block
@property (assign,nonatomic) int classType;                          //@synthesize classType=_classType - In the implementation block
@property (assign,nonatomic) unsigned version;                       //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)identifier;
-(id)dataRepresentation;
-(id)initWithIdentifier:(long long)arg1 ;
-(unsigned)version;
-(char)isLoaded;
-(void)setVersion:(unsigned)arg1 ;
-(int)classType;
-(void)setClassType:(int)arg1 ;
-(void)setFileStateIdentifier:(id)arg1 ;
-(id)fileStateIdentifier;
-(const set<long long, std::__1::less<long long>, std::__1::allocator<long long>>*)ownedIds;
-(char)setDataRepresentation:(id)arg1 shouldCopy:(char)arg2 error:(id*)arg3 ;
-(void)setOwnedIds:(const set<long long, std::__1::less<long long>, std::__1::allocator<long long>>*)arg1 ;
-(void)setRelativeDataPath:(NSString *)arg1 ;
-(NSString *)relativeDataPath;
@end
