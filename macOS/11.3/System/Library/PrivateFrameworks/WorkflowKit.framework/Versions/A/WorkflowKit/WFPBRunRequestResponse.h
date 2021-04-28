/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray, NSString;

@interface WFPBRunRequestResponse : PBCodable <NSCopying> {

	NSData* _errorData;
	NSMutableArray* _outputDatas;
	NSString* _runRequestIdentifier;
	NSMutableArray* _variablesDatas;

}

@property (nonatomic,retain) NSString * runRequestIdentifier;              //@synthesize runRequestIdentifier=_runRequestIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * variablesDatas;              //@synthesize variablesDatas=_variablesDatas - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputDatas;                 //@synthesize outputDatas=_outputDatas - In the implementation block
@property (nonatomic,readonly) char hasErrorData; 
@property (nonatomic,retain) NSData * errorData;                           //@synthesize errorData=_errorData - In the implementation block
+(Class)variablesDataType;
+(Class)outputDataType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(NSData *)errorData;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)runRequestIdentifier;
-(void)setErrorData:(NSData *)arg1 ;
-(void)clearVariablesDatas;
-(void)addVariablesData:(id)arg1 ;
-(unsigned long long)variablesDatasCount;
-(id)variablesDataAtIndex:(unsigned long long)arg1 ;
-(void)clearOutputDatas;
-(void)addOutputData:(id)arg1 ;
-(unsigned long long)outputDatasCount;
-(id)outputDataAtIndex:(unsigned long long)arg1 ;
-(char)hasErrorData;
-(void)setRunRequestIdentifier:(NSString *)arg1 ;
-(NSMutableArray *)variablesDatas;
-(void)setVariablesDatas:(NSMutableArray *)arg1 ;
-(NSMutableArray *)outputDatas;
-(void)setOutputDatas:(NSMutableArray *)arg1 ;
@end

