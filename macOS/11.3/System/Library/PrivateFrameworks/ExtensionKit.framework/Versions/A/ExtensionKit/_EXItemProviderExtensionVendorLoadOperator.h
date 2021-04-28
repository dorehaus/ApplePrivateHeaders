/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/Versions/A/ExtensionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_EXItemProviderLoading.h>

@class NSUUID, NSString;

@interface _EXItemProviderExtensionVendorLoadOperator : NSObject <_EXItemProviderLoading> {

	NSUUID* _identifier;
	NSUUID* _extensionContextIdentifier;

}

@property (copy) NSUUID * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSUUID * extensionContextIdentifier;               //@synthesize extensionContextIdentifier=_extensionContextIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)loadItemForTypeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 expectedValueClass:(Class)arg3 options:(id)arg4 ;
-(void)loadPreviewImageWithCompletionHandler:(/*^block*/id)arg1 expectedValueClass:(Class)arg2 options:(id)arg3 ;
-(id)initWithExtensionContextIdentifier:(id)arg1 ;
-(void)setExtensionContextIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)extensionContextIdentifier;
@end
