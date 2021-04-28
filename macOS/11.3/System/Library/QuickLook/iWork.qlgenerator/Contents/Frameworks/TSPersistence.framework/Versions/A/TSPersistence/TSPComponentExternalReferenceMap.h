/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSPComponentExternalReferenceMap : NSObject <NSCopying> {

	IdentifierMap<TSP::ComponentExternalReferenceInfo>* _map;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)saveToMessage:(ComponentInfo*)arg1 ;
-(id)initFromMessage:(const ComponentInfo*)arg1 ;
-(ComponentExternalReferenceInfo)externalReferenceInfoForObjectIdentifier:(long long)arg1 ;
-(void)enumerateExternalReferences:(/*^block*/id)arg1 ;
-(void)addExternalReferenceToObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isWeak:(char)arg3 componentIsVersioned:(char)arg4 ;
-(id)initWithMapSize:(unsigned long long)arg1 ;
-(void)appendReferencesFromMessage:(const RepeatedPtrField<TSP::ComponentExternalReference>*)arg1 componentIsVersioned:(char)arg2 ;
-(id)initWithComponentExternalReferenceMap:(id)arg1 ;
@end

