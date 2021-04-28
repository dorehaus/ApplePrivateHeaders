/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPassLibraryDataProvider.h>

@class PKPassLibrary, NSString;

@interface PKPassLibraryDefaultDataProvider : NSObject <PKPassLibraryDataProvider> {

	PKPassLibrary* _library;

}

@property (nonatomic,readonly) char canAddPaymentPass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)passWithUniqueID:(id)arg1 ;
-(id)initWithPassLibrary:(id)arg1 ;
-(char)canAddSecureElementPassWithConfiguration:(id)arg1 ;
-(id)peerPaymentPassUniqueID;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(void)removePass:(id)arg1 ;
-(id)paymentPasses;
-(char)canAddPaymentPass;
@end

