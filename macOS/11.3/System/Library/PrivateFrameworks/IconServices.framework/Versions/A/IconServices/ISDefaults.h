/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IconServices/IconServices-Structs.h>
@class NSURL, NSString, NSNumber;

@interface ISDefaults : NSObject {

	char __enableAppIconOverrides;
	char __enable1016Icons;
	char __ignoreDocumentClaimIcons;
	os_unfair_lock_s _lock;
	NSURL* _cacheURL;
	NSString* _cacheSaltString;
	NSString* _serviceName;
	NSNumber* __usePerstentCache;

}

@property (retain) NSNumber * _usePerstentCache;                      //@synthesize _usePerstentCache=__usePerstentCache - In the implementation block
@property (readonly) os_unfair_lock_s lock;                           //@synthesize lock=_lock - In the implementation block
@property (readonly) char _enableAppIconOverrides;                    //@synthesize _enableAppIconOverrides=__enableAppIconOverrides - In the implementation block
@property (readonly) char _enable1016Icons;                           //@synthesize _enable1016Icons=__enable1016Icons - In the implementation block
@property (readonly) char _ignoreDocumentClaimIcons;                  //@synthesize _ignoreDocumentClaimIcons=__ignoreDocumentClaimIcons - In the implementation block
@property (readonly) char usePerstentCache; 
@property (readonly) NSURL * cacheURL;                                //@synthesize cacheURL=_cacheURL - In the implementation block
@property (readonly) NSString * cacheSaltString;                      //@synthesize cacheSaltString=_cacheSaltString - In the implementation block
@property (readonly) NSString * serviceName;                          //@synthesize serviceName=_serviceName - In the implementation block
@property (readonly) char templatizedAppIcons; 
@property (readonly) char defaultToTemplatizedAppIcons; 
@property (readonly) char allowDocumentClaimIcons; 
@property (readonly) char preferSymbolAsTemplateVariant; 
@property (readonly) char enableAppIconOverides; 
@property (readonly) double prepareImageDelay; 
+(id)sharedInstance;
-(char)defaultToTemplatizedAppIcons;
-(char)templatizedAppIcons;
-(char)enableAppIconOverides;
-(double)prepareImageDelay;
-(char)allowDocumentClaimIcons;
-(char)preferSymbolAsTemplateVariant;
-(char)usePerstentCache;
-(NSString *)cacheSaltString;
-(NSNumber *)_usePerstentCache;
-(void)set_usePerstentCache:(NSNumber *)arg1 ;
-(char)_enableAppIconOverrides;
-(char)_enable1016Icons;
-(char)_ignoreDocumentClaimIcons;
-(id)init;
-(os_unfair_lock_s)lock;
-(NSString *)serviceName;
-(NSURL *)cacheURL;
@end

