/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFKeyDerivingOperation.h>

@class NSData, NSString;

@interface SFPBKDF2Operation : NSObject <SFKeyDerivingOperation> {

	id _pbkdf2OperationInternal;

}

@property (nonatomic,copy) id<SFPseudoRandomFunction> pseudoRandomFunction; 
@property (assign,nonatomic) long long iterationCount; 
@property (nonatomic,copy) NSData * salt; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)keySource;
+(char)supportsSecureCoding;
+(id)_randomSalt;
-(id<SFPseudoRandomFunction>)pseudoRandomFunction;
-(id)initWithPseudoRandomFunction:(id)arg1 iterationCount:(long long)arg2 salt:(id)arg3 ;
-(id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id*)arg3 ;
-(void)setIterationCount:(long long)arg1 ;
-(void)setPseudoRandomFunction:(id<SFPseudoRandomFunction>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)salt;
-(void)setSalt:(NSData *)arg1 ;
-(long long)iterationCount;
@end

