/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, CHTextCorrectionResult;

@interface CHStrokeGroupTextCorrectionResult : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _inputStrokeIdentifiers;
	CHTextCorrectionResult* _textCorrectionResult;

}

@property (nonatomic,copy,readonly) NSArray * inputStrokeIdentifiers;                           //@synthesize inputStrokeIdentifiers=_inputStrokeIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) CHTextCorrectionResult * textCorrectionResult;              //@synthesize textCorrectionResult=_textCorrectionResult - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)inputStrokeIdentifiers;
-(CHTextCorrectionResult *)textCorrectionResult;
-(id)initWithTextCorrectionResult:(id)arg1 inputStrokeIdentifiers:(id)arg2 ;
-(char)isEqualToStrokeGroupTextCorrectionResult:(id)arg1 ;
@end
