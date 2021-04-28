/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <LaunchServices/LSBundleRecord.h>

@class LSBundleRecord, NSDictionary, LSPlugInKitProxy, NSString, NSUUID, LSExtensionPointRecord;

@interface LSApplicationExtensionRecord : LSBundleRecord {

	LSBundleRecord* _weakContainingBundleRecord;

}

@property (readonly) NSDictionary * iconDictionary; 
@property (readonly) LSBundleRecord * _containingBundleRecord; 
@property (nonatomic,readonly) LSPlugInKitProxy * compatibilityObject; 
@property (readonly) NSString * effectiveBundleIdentifier; 
@property (readonly) NSUUID * uniqueIdentifier; 
@property (readonly) LSBundleRecord * containingBundleRecord; 
@property (readonly) LSExtensionPointRecord * extensionPointRecord; 
+(char)supportsSecureCoding;
+(id)_propertyClasses;
+(id)enumeratorWithOptions:(unsigned long long)arg1 ;
+(id)enumeratorWithExtensionPointRecord:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_propertyClassesForCoding;
-(const vector<std::__1::pair<SEL *, void (*)(id, SEL *)>, std::__1::allocator<std::__1::pair<SEL *, void (*)(id, SEL *)>>>*)_resolvingMethods;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithUUID:(id)arg1 node:(id)arg2 bundleIdentifier:(id)arg3 context:(LSContext*)arg4 error:(id*)arg5 ;
-(id)effectiveBundleIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(NSString *)effectiveBundleIdentifier;
-(id)uniqueIdentifierWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(NSUUID *)uniqueIdentifier;
-(LSBundleRecord *)_containingBundleRecord;
-(id)extensionPointRecordWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(LSExtensionPointRecord *)extensionPointRecord;
-(id)_containingBundleRecordWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(LSBundleRecord *)containingBundleRecord;
-(char)developerType;
-(id)managedPersonas;
-(id)managedPersonasWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(char)_usesSystemPersona;
-(id)_initWithContext:(LSContext*)arg1 persistentIdentifierData:(const LSPersistentIdentifierData*)arg2 length:(unsigned long long)arg3 ;
-(void)_detachFromContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)_replacementObjectForResolvedPropertyValue:(id)arg1 forGetter:(SEL)arg2 encoder:(id)arg3 ;
-(id)initWithUUID:(id)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_LSRecord_resolve_effectiveBundleIdentifier;
-(void)_LSRecord_resolve_uniqueIdentifier;
-(void)_LSRecord_resolve_extensionPointRecord;
-(id)_initWithContext:(LSContext*)arg1 pluginID:(unsigned)arg2 pluginData:(const LSPluginData*)arg3 error:(id*)arg4 ;
-(void)_LSRecord_resolve__containingBundleRecord;
-(void)_LSRecord_resolve_managedPersonas;
-(char)_containerized;
-(unsigned long long)_containerClass;
-(id)_compatibilityObjectWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const void*)arg4 ;
-(id)iconDictionaryWithContext:(LSContext*)arg1 tableID:(unsigned)arg2 unitID:(unsigned)arg3 unitBytes:(const LSPluginData*)arg4 ;
-(NSDictionary *)iconDictionary;
-(void)_LSRecord_resolve_iconDictionary;
-(id)_intentsArrayForKey:(id)arg1 ;
-(id)supportedIntents;
-(id)intentsRestrictedWhileLocked;
-(id)intentsRestrictedWhileProtectedDataUnavailable;
-(id)supportedIntentMediaCategories;
@end
