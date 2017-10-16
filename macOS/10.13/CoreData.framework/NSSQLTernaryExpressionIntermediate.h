/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/Versions/A/CoreData
 */

@interface NSSQLTernaryExpressionIntermediate : NSSQLExpressionIntermediate {
    NSSQLEntity * _disambiguatingEntity;
    NSArray * _disambiguationKeypath;
    BOOL  _disambiguationKeypathHasToMany;
}

- (id)_generateSQLForPredicate:(id)arg1 inContext:(id)arg2;
- (void)dealloc;
- (id)disambiguatingEntity;
- (id)disambiguationKeypath;
- (BOOL)disambiguationKeypathHasToMany;
- (id)generateSQLStringInContext:(id)arg1;
- (void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(BOOL)arg3;

@end
