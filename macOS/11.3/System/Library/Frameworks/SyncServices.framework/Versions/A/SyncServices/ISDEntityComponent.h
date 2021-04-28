/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SyncServices.framework/Versions/A/SyncServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SyncServices/ISDDataObject.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, ISDEntity, NSArray;

@interface ISDEntityComponent : ISDDataObject <NSCoding> {

	NSString* _extensionName;
	ISDEntity* _entity;
	NSArray* _attributes;
	NSArray* _relationships;

}
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)attributes;
-(void)setAttributes:(id)arg1 ;
-(id)relationships;
-(void)setRelationships:(id)arg1 ;
-(id)extensionName;
-(id)attributeWithName:(id)arg1 ;
-(id)propertyNames;
-(id)mainEntity;
-(char)morphInToObject:(id)arg1 ;
-(id)initWithExtensionName:(id)arg1 entity:(id)arg2 ;
-(char)isCompatibleExtensionOf:(id)arg1 ;
-(id)relationshipWithName:(id)arg1 ;
-(id)propertyWithName:(id)arg1 ;
-(void)_updatePropertiesFromComponent:(id)arg1 forKey:(id)arg2 didChange:(char*)arg3 ;
-(void)setMainEntity:(id)arg1 ;
-(id)mainEntityName;
@end

