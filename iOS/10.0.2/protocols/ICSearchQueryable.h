/* Generated by RuntimeBrowser.
 */

@protocol ICSearchQueryable

@required

- (void)cancelQuery:(id)arg1;
- (NSArray *)findNextMatchingIdentifiersForQuery:(id)arg1 isDone:(bool*)arg2;
- (id)newQueryWithSearchTerms:(NSString *)arg1;

@end
