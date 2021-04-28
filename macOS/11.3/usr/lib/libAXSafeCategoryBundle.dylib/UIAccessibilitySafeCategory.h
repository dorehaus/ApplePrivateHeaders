/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libAXSafeCategoryBundle.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libAXSafeCategoryBundle.dylib/libAXSafeCategoryBundle.dylib-Structs.h>
@class NSString;

@interface UIAccessibilitySafeCategory : NSObject

@property (nonatomic,copy) NSString * accessibilityIdentifier; 
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(id)_installSafeCategoryValidationMethod;
+(id)_initializeSafeCategoryFromValidationManager;
+(id)_installSafeCategoryOnClassNamed:(id)arg1 isManaged:(char)arg2 ;
+(id)_installLocalValidationMethodOnClassNamed:(id)arg1 ;
+(void)_addCategoryMethods:(objc_method*)arg1 count:(unsigned)arg2 excluding:(SEL*)arg3 count:(unsigned)arg4 toClass:(Class)arg5 isClass:(char)arg6 ;
+(id)_installSafeCategoryOnClass:(Class)arg1 isManaged:(char)arg2 ;
+(Class)safeCategoryTargetClass;
+(void)safeCategoryAddDependenciesToCollection:(id)arg1 ;
+(void)_installSafeCategoryOnClassNamed:(id)arg1 ;
@end

