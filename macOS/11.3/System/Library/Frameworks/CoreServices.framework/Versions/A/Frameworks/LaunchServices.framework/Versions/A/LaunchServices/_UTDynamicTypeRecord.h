/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <LaunchServices/UTTypeRecord.h>

@class NSString;

@interface _UTDynamicTypeRecord : UTTypeRecord {

	NSString* _identifier;

}
+(char)supportsSecureCoding;
+(id)_propertyClasses;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)>>>*)_resolvingMethods;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)_initWithContext:(LSContext*)arg1 dynamicUTI:(id)arg2 ;
-(id)version;
-(id)tagSpecification;
-(char)conformsToTypeIdentifier:(id)arg1 ;
-(id)parentTypeIdentifiers;
-(id)_localizedDescription;
-(void)_enumerateRelatedTypesWithContext:(LSContext*)arg1 unitID:(unsigned)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(/*^block*/id)arg4 ;
-(char)isDynamic;
-(char)isDeclared;
-(char)isWildcard;
-(char)isInPublicDomain;
-(char)isExported;
-(char)isImported;
-(char)isActive;
-(char)isCoreType;
-(id)declaringBundleRecord;
-(id)declaration;
-(id)preferredTagOfClass:(id)arg1 ;
-(id)referenceURL;
-(id)pedigree;
-(id)childTypeIdentifiers;
-(char)isChildOfTypeIdentifier:(id)arg1 ;
-(id)_declaringBundleBookmark;
-(id)_delegatePath;
-(id)pedigreeWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT9*)arg4 ;
-(id)_iconURLWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const SCD_Struct_UT9*)arg4 ;
-(void)_LSRecord_resolve_pedigree;
-(id)_persistentIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
@end

