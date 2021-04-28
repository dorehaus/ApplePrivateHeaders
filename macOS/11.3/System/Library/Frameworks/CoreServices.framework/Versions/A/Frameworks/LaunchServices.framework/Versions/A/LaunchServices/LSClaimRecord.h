/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <LaunchServices/LSRecord.h>

@class LSBundleRecord, NSDictionary, NSURL, _LSLocalizedStringRecord, NSString, NSArray;

@interface LSClaimRecord : LSRecord {

	LSBundleRecord* _weakClaimingBundleRecord;

}

@property (readonly) NSDictionary * iconDictionary; 
@property (readonly) NSURL * iconResourceBundleURL; 
@property (readonly) _LSLocalizedStringRecord * _localizedName; 
@property (readonly) LSBundleRecord * _claimingBundleRecord; 
@property (nonatomic,readonly) id compatibilityObject; 
@property (readonly) NSString * localizedName; 
@property (readonly) NSArray * typeIdentifiers; 
@property (readonly) NSArray * URLSchemes; 
@property (readonly) NSString * handlerRank; 
@property (readonly) unsigned role; 
@property (readonly) LSBundleRecord * claimingBundleRecord; 
+(char)supportsSecureCoding;
+(id)_propertyClasses;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)>>>*)_resolvingMethods;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)iconDictionaryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS8*)arg4 ;
-(NSDictionary *)iconDictionary;
-(void)_LSRecord_resolve_iconDictionary;
-(_LSLocalizedStringRecord *)_localizedName;
-(id)typeIdentifiersWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS8*)arg4 ;
-(NSArray *)typeIdentifiers;
-(id)URLSchemesWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS8*)arg4 ;
-(NSArray *)URLSchemes;
-(id)handlerRankWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS8*)arg4 ;
-(NSString *)handlerRank;
-(unsigned)roleWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS8*)arg4 ;
-(unsigned)role;
-(LSBundleRecord *)_claimingBundleRecord;
-(id)_claimingBundleRecordWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS8*)arg4 ;
-(id)_localizedNameWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS8*)arg4 ;
-(NSString *)localizedName;
-(id)localizedNameWithPreferredLocalizations:(id)arg1 ;
-(void)_LSRecord_resolve_typeIdentifiers;
-(void)_LSRecord_resolve_URLSchemes;
-(void)_LSRecord_resolve_handlerRank;
-(void)_LSRecord_resolve_role;
-(LSBundleRecord *)claimingBundleRecord;
-(void)_LSRecord_resolve__claimingBundleRecord;
-(void)_LSRecord_resolve__localizedName;
-(id)iconResourceBundleURLWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_LS8*)arg4 ;
-(NSURL *)iconResourceBundleURL;
-(void)_LSRecord_resolve_iconResourceBundleURL;
@end
