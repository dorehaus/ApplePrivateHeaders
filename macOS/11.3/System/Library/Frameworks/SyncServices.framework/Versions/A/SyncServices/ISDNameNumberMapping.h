/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, ISDNameNumberProvider;

@interface ISDNameNumberMapping : NSObject {

	NSString* _mappingName;
	int _last;
	NSMutableDictionary* _nameToNumber;
	NSMutableDictionary* _numberToName;
	ISDNameNumberProvider* _providedBy;
	NSString* _zeroMapping;

}
-(void)dealloc;
-(void)clear;
-(char)hasMappingForName:(id)arg1 ;
-(void)setNumber:(id)arg1 forName:(id)arg2 ;
-(void)setZeroMapping:(id)arg1 ;
-(void)setInt:(int)arg1 forName:(id)arg2 ;
-(int)mapNextIntToName:(id)arg1 ;
-(char)isEntityMapping;
-(id)initMappingNamed:(id)arg1 withNameNumberMap:(id)arg2 providedBy:(id)arg3 ;
-(void)refreshFromNameNumberMap:(id)arg1 ;
-(id)nameToNumberMap;
-(char)canBeMergedWith:(id)arg1 ;
-(void)mergeNameNumberMapping:(id)arg1 ;
-(id)nameForInt:(int)arg1 ;
-(id)numberForName:(id)arg1 ;
-(id)nameForNumber:(id)arg1 ;
-(void)mergeOrReplaceFromMap:(id)arg1 ;
-(char)isClientMapping;
-(int)intForName:(id)arg1 ;
@end

