/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SyncServices/SyncServices-Structs.h>
#import <SyncServices/ISDDataObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/ISyncConflictPropertyType.h>

@class NSString, NSArray, ISDFileReference;

@interface ISDProperty : ISDDataObject <NSCoding, ISyncConflictPropertyType> {

	NSString* _name;
	NSString* _fullName;
	NSString* _type;
	NSString* _subtype;
	NSArray* _enumValues;
	ISDFileReference* _bundleRef;
	NSString* _uiHelperClassName;
	NSString* _automagicConflictResolverClassName;
	NSArray* _preferredClientTypesForAutomagicResolution;
	struct {
		unsigned identityKey : 1;
		unsigned required : 1;
		unsigned excludeFromAirbagCount : 1;
		unsigned recordTypeForAutomagicResolution : 3;
		unsigned deleteRule : 1;
		unsigned toMany : 1;
		unsigned ordering : 2;
		unsigned isMatchable : 1;
		unsigned identityAlternative : 5;
	}  _flags;

}
+(void)initialize;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)name;
-(void)setType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)type;
-(void)setName:(id)arg1 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)displayName;
-(id)subtype;
-(id)bundle;
-(id)fullName;
-(char)isToMany;
-(char)isRelationship;
-(void)setSubtype:(id)arg1 ;
-(void)setRequired:(char)arg1 ;
-(char)isRequired;
-(id)fastName;
-(id)bundleRef;
-(char)morphInToObject:(id)arg1 ;
-(char)isCompatibleExtensionOf:(id)arg1 ;
-(id)uiHelperClassName;
-(void)setBundleRef:(id)arg1 ;
-(void)setUIHelperClassName:(id)arg1 ;
-(id)initWithName:(id)arg1 entity:(id)arg2 ;
-(void)setAutomagicConflictResolverClassName:(id)arg1 ;
-(void)setEnumValues:(id)arg1 ;
-(void)setExcludeFromAirbagCount:(char)arg1 ;
-(void)setPreferredClientTypesForAutomaticConflictResolution:(id)arg1 ;
-(void)setPreferredRecordTypeForAutomaticConflictResolution:(int)arg1 ;
-(void)setIdentityKey:(char)arg1 ;
-(void)setIsMatchable:(char)arg1 ;
-(char)isMatchable;
-(void)setIdentityAlternative:(int)arg1 ;
-(char)excludeFromAirbagCount;
-(id)enumValues;
-(id)displayNameForEnumValue:(id)arg1 ;
-(Class)uiHelperClass;
-(char)isIdentityKey;
-(id)fastSubtype;
-(int)identityAlternative;
-(int)preferredRecordTypeForAutomaticConflictResolution;
-(id)preferredClientTypesForAutomaticConflictResolution;
-(id)automagicConflictResolverClassName;
-(char)isIdentityKeyForAlternative:(int)arg1 ;
-(Class)automagicConflictResolverClass;
@end
