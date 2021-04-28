/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFKeyDerivingOperation.h>

@class NSString;

@interface SFX963KeyDerivationOperation : NSObject <SFKeyDerivingOperation> {

	id _x963KeyDerivationOperationInternal;

}

@property (nonatomic,copy) id<SFKeyDerivingOperation> sharedSecretOperation; 
@property (nonatomic,copy) id<SFDigestOperation> digestOperation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)keySource;
+(char)supportsSecureCoding;
-(id<SFKeyDerivingOperation>)sharedSecretOperation;
-(id<SFDigestOperation>)digestOperation;
-(id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id*)arg3 ;
-(id)initWithSharedSecretOperation:(id)arg1 ;
-(id)initWithSharedSecretOperation:(id)arg1 digestOperation:(id)arg2 ;
-(void)setSharedSecretOperation:(id<SFKeyDerivingOperation>)arg1 ;
-(void)setDigestOperation:(id<SFDigestOperation>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

