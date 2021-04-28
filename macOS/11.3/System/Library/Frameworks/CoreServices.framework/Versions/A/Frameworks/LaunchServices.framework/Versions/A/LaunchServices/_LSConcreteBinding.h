/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/LaunchServices.framework/Versions/A/LaunchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LaunchServices/LaunchServices-Structs.h>
#import <libobjc.A.dylib/LSIconResourceProvider.h>
#import <libobjc.A.dylib/LSBindingComponents.h>

@class NSArray, NSString, NSDate, NSURL, NSData;

@interface _LSConcreteBinding : NSObject <LSIconResourceProvider, LSBindingComponents> {

	Binding* _binding;
	OpaqueIconRefRef _iconRef;

}

@property (readonly) unsigned long long variantFlags; 
@property (readonly) unsigned long long badge; 
@property (readonly) unsigned typeCode; 
@property (readonly) NSString * type; 
@property (readonly) unsigned long long cacheingProfile; 
@property (readonly) SCD_Struct_LS18 validationToken; 
@property (readonly) NSArray * resources; 
@property (readonly) NSArray * decorations; 
@property (readonly) char templateVariant; 
@property (readonly) char selectedVariant; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * fileExtension; 
@property (readonly) NSDate * contentModificationDate; 
@property (readonly) NSURL * url; 
@property (readonly) NSData * iconData; 
@property (readonly) NSURL * iconURL; 
@property (readonly) NSString * kextBundleIdentifier; 
@property (readonly) NSString * kextIconName; 
@property (getter=isExecutable,readonly) char executable; 
@property (getter=isDirectory,readonly) char directory; 
@property (getter=isApplication,readonly) char application; 
@property (getter=isPackage,readonly) char package; 
@property (getter=isAliasFile,readonly) char aliasFile; 
@property (getter=isSymbolicLinkFile,readonly) char symbolicLinkFile; 
@property (getter=isVolume,readonly) char volume; 
@property (readonly) char applicationHasSupportedFormat; 
@property (getter=isApplicationPlaceholder,readonly) char applicationPlaceholder; 
@property (readonly) char hasCustomIcon; 
@property (getter=isBadgeOnlyVariant,readonly) char badgeOnlyVariant; 
@property (getter=isNoBadgeVariant,readonly) char noBadgeVariant; 
@property (getter=isTemplateVariant,readonly) char templateVariant; 
@property (getter=isSelectedVariant,readonly) char selectedVariant; 
@property (readonly) Binding* binding;                                                         //@synthesize binding=_binding - In the implementation block
@property (readonly) OpaqueIconRefRef iconRef;                                                 //@synthesize iconRef=_iconRef - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(unsigned long long)_cfTypeID;
-(NSString *)type;
-(NSString *)type;
-(char)isDirectory;
-(char)isVolume;
-(char)isExecutable;
-(char)isAliasFile;
-(Binding*)binding;
-(char)isEqualToConcreteBinding:(id)arg1 ;
-(id)initWithBinding:(Binding*)arg1 ;
-(OpaqueIconRefRef)iconRef;
-(OpaqueIconRefRef)iconRef;
-(unsigned long long)badge;
-(unsigned long long)variantFlags;
-(OpaqueIconRefRef)copyIconRef;
-(unsigned)typeCode;
-(unsigned)typeCode;
-(unsigned long long)cacheingProfile;
-(id)copyVariant:(unsigned)arg1 ;
-(void)overrideWithBinding:(id)arg1 ;
-(unsigned)validationStateWithToken:(SCD_Struct_LS18)arg1 ;
-(SCD_Struct_LS18)validationToken;
-(void)enumerateIconResourceInfoWithOptions:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)dataRepresentationWithOptions:(unsigned long long)arg1 ;
-(char)getUpdatedDatabaseUUID:(id*)arg1 sequenceNumber:(unsigned long long*)arg2 ;
-(char)isBadgeOnlyVariant;
-(char)isApplication;
-(char)isSymbolicLinkFile;
-(char)isPackage;
-(NSString *)fileExtension;
-(char)applicationHasSupportedFormat;
-(char)isApplicationPlaceholder;
-(NSURL *)iconURL;
-(NSURL *)url;
-(NSString *)kextBundleIdentifier;
-(NSString *)kextIconName;
-(NSData *)iconData;
-(char)isNoBadgeVariant;
-(char)isTemplateVariant;
-(char)isSelectedVariant;
-(NSArray *)resources;
-(NSArray *)decorations;
-(char)providesTemplateResources;
-(char)templateVariant;
-(char)selectedVariant;
-(Binding*)targetBinding;
-(NSDate *)contentModificationDate;
-(char)hasCustomIcon;
-(id)bottomLeftDecoration;
-(id)bottotRightDecoration;
-(id)topRightDecoration;
-(id)centerDecoration;
@end
